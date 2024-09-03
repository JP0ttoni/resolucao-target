import json

with open('resolucao-target/ex3_arq.json') as dados_json:
    dados = json.load(dados_json)
    
faturamentos = [dia["valor"] for dia in dados["faturamento_diario"]]

faturamentos_validos = [valor for valor in faturamentos if valor > 0]

menor_valor = min(faturamentos_validos)

maior_valor = max(faturamentos_validos)

media_mensal = sum(faturamentos_validos) / len(faturamentos_validos)

dias_acima_da_media = len([valor for valor in faturamentos_validos if valor > media_mensal])

print(f"Menor valor de faturamento: {menor_valor}")
print(f"Maior valor de faturamento: {maior_valor}")
print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")
