if [[ -f TextToSh ]]
then
    ./TextToSh
else
    g++ src/main.cpp -o TextToSh
    ./TextToSh
fi
