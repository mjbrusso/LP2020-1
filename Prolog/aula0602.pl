/* 	 doente/2  */
doente(alberto, cardiaca).
doente(alberto, renal).
doente(maria, pele).
doente(carlos, labirintite).
doente(elza, renal).
doente(joaquim, covid).

/* cronica/2 */
cronica(cardiaca).
cronica(renal).
cronica(pele) :- false.
cronica(covid).

/*  mora/3 */
mora(alberto, passo_fundo, rs).
mora(maria, erechim, rs).
mora(carlos, lages, sc).
mora(elza, casca, rs).
mora(joaquim, belo_horizonte, mg).

/* idade/2 */
idade(alberto, 55).
idade(maria, 33).
idade(carlos, 75).
idade(elza, 81).
idade(joaquim, 75).

gaucha(P) :- mora(P, _, rs).
idosa(P) :- idade(P, I) , I >= 60.

xiruveio(P) :- gaucha(P) , idosa(P).

emrisco(P) :- (doente(P, D) , cronica(D)) ; idosa(P).

pessoasemrisco(P) :- distinct(emrisco(P)).


