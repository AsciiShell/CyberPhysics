* ASCIISHELL params for transistors
* change WP to balance schema 0.63u
.param Vol=2.5 None=0.0000000000001
.param un=0.0317
.param up=0.0136
.param LChan=0.25u
.param WtoL=8
.param WN={{WtoL}*{LChan}}
.param WP={((un)/(up))*(WtoL)*(LChan)}
.param AS={WN * LChan}
.param AD={WP * LChan}
.param PS={2 * (WN + LChan)}
.param PD={2 * (WP + LChan)}
.param GenTmin=27n
*
*.endl
