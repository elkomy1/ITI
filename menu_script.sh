#!/bin/bash

PS3='Please enter your choice:'
options=("Display current date and time" "Display the system up time" "Display information about logged in users")

select opt in "${options[@]}"
do
    case $opt in
        "Display current date and time")
            echo "You chose option 1"
            date
            ;;
        "Display the system up time")
            echo "You chose option 2"
            uptime
            ;;
        "Display information about logged in users")
            echo "You chose option 3"
            who
            break
            ;;
        *) 
            echo "Invalid option. Please enter a number between 1 and 3."
            ;;
    esac
done



