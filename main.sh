for i in 1
do
	for(( j=1; j<=250; j++))
	do
		x=`expr $j \* 50`
		len=`./a.out $i $x`
		echo $x $len
	done
done
