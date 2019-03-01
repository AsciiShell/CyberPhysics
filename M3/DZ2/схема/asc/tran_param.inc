* ASCIISHELL params for transistors
* change WP to balance schema 0.63u
.param Vol=2.5 None=0.0000000000001
.param un=0.0317
.param up=0.0136
.param LChan=0.25u
.param WtoL=8
.param Depth=3.75u
.param WN={{WtoL}*{LChan}}
.param WP={((un)/(up))*(WtoL)*(LChan)}
.param ASN={WN * Depth}
.param ADN={ASN}
.param ASP={WP * Depth}
.param ADP={ASP}
.param PSN={2 * (WN + Depth)}
.param PDN={2 * (WN + Depth)}
.param PSP={2 * (WP + Depth)}
.param PDP={2 * (WP + Depth)}
.param GenTmin=27n
*
*.endl
