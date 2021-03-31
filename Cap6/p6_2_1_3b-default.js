function soma(a, inicio = 0, fim = 7, incr = 1) {
    let soma = 0
    for (let i = inicio; i < fim; i += incr)
        soma += a[i]

    return soma
}

const pontuacao = [9, 4, 10, 1, 5, 6, 2]

const ptotal = soma(pontuacao)
console.log(ptotal)

const pQuaSab = soma(pontuacao, 3)
console.log(pQuaSab)

const pTerQui = soma(pontuacao, 2, 5)
console.log(pTerQui)

const pSegQuaSex = soma(pontuacao, 1, 6, 2)
console.log(pSegQuaSex)
