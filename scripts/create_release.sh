#!/usr/bin/env bash

function bump_version {
    TAG_NAME=$1
    BODY=$2
    echo "BUMP to tag $TAG_NAME with body '$BODY'"
    git tag $TAG_NAME -m "$BODY"
    git push --tags
}

if [ "$1" = "" ]; then
    echo "Help menu:"
    echo
    echo "  Bump tag version:"
    echo "    ./create_release.sh -t lexer"
    echo
    echo "  Bump tag version and describe it"
    echo "    ./create_release.sh -t lexer -b 'FINALLY.'"
else
    TAG= BODY=
    while [[ $# -gt 0 ]]
    do
        key="$1"
        case $key in
            -t)
            TAG=$2
            shift # past argument
            shift # past value
            ;;
            -b)
            BODY=$2
            shift # past argument
            shift # past value
            ;;
            *)    # unknown option
            POSITIONAL+=("$1") # save it in an array for later
            shift # past argument
            ;;
        esac
    done

    set -- "${POSITIONAL[@]}" # restore positional parameters
        
    echo "TAG  = ${TAG}"
    echo "BODY = ${BODY}"

    if [ "$TAG" = "" ]; then
        echo "Please describe the tag name."
        exit 4
    fi

    if [ "$BODY" = "" ]; then
        body=$(git log | head -n 5 | tail -n 1 | sed -e 's/^[ \t]*//')
        echo "You didn't passed body description."
        echo "The release description will be the name of the last commit."
        echo "Body > $BODY"
        read -p "Are you sure? [Y|n]" -n 1 -r
        echo
        if [[ $REPLY =~ ^[Nn]$ ]]; then
           exit
        fi
    else
        echo "The release description will be > '$BODY'."
        read -p "Are you sure? [Y|n]" -n 1 -r
        echo
        if [[ $REPLY =~ ^[Nn]$ ]]; then
            exit
        fi
    fi
    bump_version $TAG "$BODY"
fi