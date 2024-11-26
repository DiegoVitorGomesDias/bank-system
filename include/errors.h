#ifndef ERRORS_H
#define ERRORS_H

typedef int ErrorController;

#define NO_ERROR 0

// Erros Globais
#define INPUT_ERROR 101

// Erros de Usuário
#define USER_DOENST_EXIST_ERROR 201

// Erros em Transações
#define INSUFICCIENT_MONEY_ERROR 301
#define MONEY_LIMIT_ERROR 302

// Erros em Estruturas Auxiliares
#define INVALID_DAY_ERROR 401
#define INVALID_MONTH_ERROR 402
#define INVALID_YEAR_ERROR 403

#endif