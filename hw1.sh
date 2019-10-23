#!/bin/bash

prime() {
    for (( j=2;j<=$1;j++ ))
    do
        for (( i=2;i<=j-1;i++ ))
        do
            if ((j%i==0))
            then
                break;
            fi
        done

        if ((i==j))
        then
            echo $j
        fi
    done
}

factor() {

    for ((i=1;i<=$1;i++))
    do
        if (($1 % i == 0))
        then
            echo $i
        fi
    done
}
while true 
do
    read num var
    if [ $num = q -o $num = Q ]
    then
        break
    elif [ $var = f ]
    then
        factor $num
    elif [ $var = p ]
    then
        prime $num
    fi

done