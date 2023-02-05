
set style line 3 lc rgb 'red' pt 7
set style line 2 lc rgb 'blue' pt 7
set title 'K-Means'
set datafile separator ","

set grid
plot [:50][:50] 'C:\Users\Marius\Desktop\K-Means_R_d\dataset.csv' title 'Points' with points ls 2, 'C:\Users\Marius\Desktop\K-Means_R_d\centroids.csv' title 'Centroids' with points ls 3