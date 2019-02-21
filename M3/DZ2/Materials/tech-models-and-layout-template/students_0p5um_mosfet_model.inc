* SPICE 3f5 Level 8, Star-HSPICE Level 49, UTMOST Level 8
*.LIB CMOS_MODELS
* HP 0.5 um process
* DATE: Jan 22/99
* LOT: n8ct                  WAF: 49
* Temperature_parameters=Default
.MODEL CMOSN NMOS (                                LEVEL   = 8
+VERSION = 3.1            TNOM    = 27             TOX     = 9.4E-9
+XJ      = 1.5E-7         NCH     = 1.7E17         VTH0    = 0.632125
+K1      = 0.773407       K2      = -0.0291082     K3      = 74.1702243
+K3B     = 4.797568       W0      = 6.858565E-6    NLX     = 1E-10
+DVT0W   = 0              DVT1W   = 5.3E6          DVT2W   = -0.032
+DVT0    = 8.90664        DVT1    = 0.7256309      DVT2    = -0.1024371
+U0      = 449.8949441    UA      = 1.012882E-10   UB      = 2.121676E-18
+UC      = 6.409544E-11   VSAT    = 1.460868E5     A0      = 0.85216
+AGS     = 0.2390643      B0      = 1.610947E-6    B1      = 5E-6
+KETA    = -0.0111104     A1      = 0              A2      = 1
+RDSW    = 1.111531E3     PRWG    = 0.0461407      PRWB    = -1E-3
+WR      = 1              WINT    = 2.435417E-7    LINT    = 4.514167E-8
+XL      = -1E-7          XW      = 0              DWG     = -1.465616E-8
+DWB     = 1.472475E-8    VOFF    = -0.1202974     NFACTOR = 0.9353239
+CIT     = 0              CDSC    = 1.216497E-4    CDSCD   = 0
+CDSCB   = 0              ETA0    = 5.807922E-5    ETAB    = -0.0443936
+DSUB    = 0.5258246      PCLM    = 0.6383812      PDIBLC1 = 0.2046533
+PDIBLC2 = 5.550838E-3    PDIBLCB = 0              DROUT   = 0.5777439
+PSCBE1  = 2.248855E10    PSCBE2  = 1.073826E-8    PVAG    = 0.4306016
+DELTA   = 0.01           MOBMOD  = 1              PRT     = 0
+UTE     = -1.5           KT1     = -0.11          KT1L    = 0
+KT2     = 0.022          UA1     = 4.31E-9        UB1     = -7.61E-18
+UC1     = -5.6E-11       AT      = 3.3E4          WL      = 0
+WLN     = 1              WW      = 0              WWN     = 1
+WWL     = 0              LL      = 0              LLN     = 1
+LW      = 0              LWN     = 1              LWL     = 0
+CAPMOD  = 2              XPART   = 0.4            CGDO    = 2.37E-10
+CGSO    = 2.37E-10       CGBO    = 0              CJ      = 5.088836E-4
+PB      = 0.99           MJ      = 0.7540064      CJSW    = 4.37515E-10
+PBSW    = 0.99           MJSW    = 0.1            PVTH0   = 6.675129E-3
+PRDSW   = -85.7175971    PK2     = 9.422597E-3    WKETA   = -2.036942E-3
+LKETA   = 6.098215E-3     )
*
.MODEL CMOSP PMOS (                                LEVEL   = 8
+VERSION = 3.1            TNOM    = 27             TOX     = 9.4E-9
+XJ      = 1.5E-7         NCH     = 1.7E17         VTH0    = -0.8482042
+K1      = 0.3925674      K2      = 0.0114512      K3      = 51.6311303
+K3B     = -5.5375662     W0      = 7.257283E-6    NLX     = 1E-10
+DVT0W   = 0              DVT1W   = 5.3E6          DVT2W   = -0.032
+DVT0    = 4.2690258      DVT1    = 0.5367096      DVT2    = -0.0776131
+U0      = 175.5957556    UA      = 6.977535E-10   UB      = 2.06856E-18
+UC      = -2.87667E-11   VSAT    = 1.856441E5     A0      = 0.8773752
+AGS     = 0.3159072      B0      = 3.937202E-6    B1      = 5E-6
+KETA    = -1.03583E-3    A1      = 0              A2      = 1
+RDSW    = 1.666716E3     PRWG    = 0.0357223      PRWB    = -1E-3
+WR      = 1              WINT    = 2.450178E-7    LINT    = 4.479418E-9
+XL      = -1E-7          XW      = 0              DWG     = -2.295909E-8
+DWB     = 6.006026E-9    VOFF    = -0.1173615     NFACTOR = 1.4263192
+CIT     = 0              CDSC    = 1.413317E-4    CDSCD   = 0
+CDSCB   = 0              ETA0    = 0.8415662      ETAB    = 0
+DSUB    = 0.6622223      PCLM    = 4.3287367      PDIBLC1 = 0.2466274
+PDIBLC2 = 9.732557E-3    PDIBLCB = -8.469125E-7   DROUT   = 9.756757E-4
+PSCBE1  = 1.552974E10    PSCBE2  = 1.007547E-8    PVAG    = 11.7633901
+DELTA   = 0.01           MOBMOD  = 1              PRT     = 0
+UTE     = -1.5           KT1     = -0.11          KT1L    = 0
+KT2     = 0.022          UA1     = 4.31E-9        UB1     = -7.61E-18
+UC1     = -5.6E-11       AT      = 3.3E4          WL      = 0
+WLN     = 1              WW      = 0              WWN     = 1
+WWL     = 0              LL      = 0              LLN     = 1
+LW      = 0              LWN     = 1              LWL     = 0
+CAPMOD  = 2              XPART   = 0.4            CGDO    = 2.57E-10
+CGSO    = 2.57E-10       CGBO    = 0              CJ      = 9.355716E-4
+PB      = 0.9377002      MJ      = 0.4794468      CJSW    = 1.536464E-10
+PBSW    = 0.5197024      MJSW    = 0.1            PVTH0   = -7.891349E-4
+PRDSW   = -157.4005431   PK2     = 3.705893E-3    WKETA   = 1.860108E-3
+LKETA   = -1.515456E-3    )
*
*.ENDL
