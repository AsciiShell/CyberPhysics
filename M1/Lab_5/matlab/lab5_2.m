nu = [2000 3000 3900 4000 4100 4200 4300 4400 4500 4600 4700 4800 4900 5000 5100 5200 5300 5400 5500 5600 5700 5800 5900 6000 6100 7000 8000 9000 10000 12000 14000 16000 18000 20000]
v1 = [0.4 1.0 1.8 1.9 2.0 2.1 2.2 2.3 2.4 2.4 2.5 2.6 2.6 2.7 2.8 2.8 2.9 2.9 3.0 3.0 3.0 3.0 3.0 3.1 3.1 3.1 3.1 3.0 2.9 2.8 2.7 2.7 2.6 2.6]  
v2 = [2.7 3.0 3.1 3.1 3.1 3.1 3.1 3.0 3.0 3.0 3.0 2.9 2.9 2.8 2.8 2.7 2.7 2.6 2.6 2.5 2.5 2.4 2.3 2.3 2.2 1.7 1.3 1.0 0.8 0.6 0.4 0.3 0.2 0.2]
v3 = [2.4 2.3 2.2 2.2 2.2 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.1 2.2 2.3 2.4 2.4 2.4 2.4 2.4 2.5 2.5]
i = [3.7 5.9 7.9 8.1 8.2 8.4 8.5 8.7 8.8 8.9 8.9 9.0 9.0 9.1 9.1 9.0 9.0 9.0 8.9 8.9 8.8 8.7 8.6 8.6 8.5 7.4 6.4 5.4 4.7 3.7 2.9 2.4 2.0 1.7]
fi = [-54 -50 -35 -33 -30 -28 -26 -22 -19 -16 -14 -11 -8 -5 -2 0 3 6 9 11 13 15 18 20 22 35 40 50 54 56 56 52 52 45]
plot(nu, v1,'-',nu, v2,'-',nu, v3,'-')
legend V1 V2 V3
%plot(nu, i)
%legend I
%plot(nu, fi)
%legend fi
grid on
