
for V in $(ls *.curry)
do 
    echo ${V%.*};
    pakcs :l ${V%.*} :q;
    rice ${V%.*};
    ./${V%.*};
done
