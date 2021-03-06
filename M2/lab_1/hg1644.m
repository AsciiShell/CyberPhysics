close all
U4_3 = [ 0.01 0.02 0.05 0.08 0.1 0.13 0.17 0.19 0.5 0.58 0.6] 
U4_2 = [ 0.01 0.05 0.09 0.28 0.99 1.74 ]
U4_1 = [0.02 0.06 0.09 0.11 0.15 0.29 0.69 1 1.2 1.5 1.75 1.95 2.23 2.65 3 3.1] 
I4_3 = [0 0.0001124 0.000378 0.0015 0.00255 0.00416 0.00626 0.00732 0.0092 0.00925 0.00923] 
I4_2 = [0 0.00028 0.00125 0.00615 0.00673 0.00693 ]
I4_1 = [0 0.00028 0.00073 0.001019 0.00169 0.00339 0.00376 0.00386 0.0039 0.00395 0.004 0.00402 0.00408 0.00415 0.00419 0.0042 ]

Ik_4 = [ 0.0027 0.004 0.0072 0.0166 0.0242 0.0532 0.0705 0.094 0.15 0.17 0.4 2.6 4.901 8.42 ]
Ub_4 = [ -0.08 -0.03 -0.03 0.03 0.06 0.13 0.19 0.33 0.48 0.52 0.58 0.64 0.68 0.71 ]
Ib_4 = [  0.0000001 0.0000001 0.0000002 0.0000003 0.0000005 0.0000009 0.0000011 0.0000014 0.0000022 0.0000026 0.000005 0.0000214 0.000156 0.000655 ]


plot(U4_1 , I4_1, '-x', U4_2 , I4_2,'-o', U4_3 , I4_3,'-.o')
legend("30","50","70")

figure
semilogy( Ub_4 , Ib_4,'-o',Ub_4 , Ik_4,'-x')
legend("base","col")

figure
semilogy( Ub_4 , Ik_4./Ib_4,'-o')


figure
plot( U4_2 , I4_2,'-o')

rn = 3
rc = (U4_2(rn+1) - U4_2(rn))/ (I4_2(rn+1) - I4_2(rn))

vafn = 4
vaf = (U4_2(vafn+1) - U4_2(vafn))/ (I4_2(vafn+1) - I4_2(vafn)) * I4_2(vafn) - U4_2(vafn)

isn = length(Ub_4) - 3

1
Ub_4(isn)
Ik_4(isn)

2
Ub_4(isn + 1)
Ik_4(isn + 1)

nf = 1.23287
is = 5.54495 * 10^(-9)

rbn = 5
rb = (Ub_4(rbn) - nf*0.026*log((Ik_4(rbn)/is) + 1))/Ib_4(rbn)
rb1 = (Ub_4 - nf.*0026.*log((Ik_4./is) + 1))./Ib_4
%close all

bf = max(Ik_4./Ib_4)