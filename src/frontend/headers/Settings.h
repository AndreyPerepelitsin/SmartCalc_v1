#ifndef SETTINGS_H_
#define SETTINGS_H_

#include "../../expression_calculator_backend/headers/s21_calc_library.h"
#include "front_error_codes.h"

namespace Settings {
int errorCodeExpression = ErrorCode_noError;
int errorCodeVariable = ErrorCode_noError;

int errorCodeDomain = ErrorCode_noError;
int errorCodeCodomain = ErrorCode_noError;
int errorCodeGraph = ErrorCode_noError;

int errorCodeCreditAmount = ErrorCode_noError;
int errorCodeCreditDeadline = ErrorCode_noError;
int errorCodeCreditInterestValue = ErrorCode_noError;

int errorCodeDepositAmount = ErrorCode_noError;
int errorCodeDepositPlacementPeriod = ErrorCode_noError;
}  // namespace Settings

#endif  // SETTINGS_H_
