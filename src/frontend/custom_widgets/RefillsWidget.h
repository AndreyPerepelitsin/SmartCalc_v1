#ifndef REFILLSWIDGET_H_
#define REFILLSWIDGET_H_

#include <QComboBox>
#include <QDateEdit>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

#include "../../deposit_calculator_backend/headers/s21_deposit_calc_library.h"
#include "../headers/front_error_codes.h"
#include "../headers/get_interval_type.h"
#include "../headers/handle_styles.h"
#include "../headers/set_current_date.h"
#include "../headers/string_validator.h"

class RefillsWidget : public QWidget {
  Q_OBJECT

 public:
  RefillsWidget(QWidget* parent = nullptr);

  QVBoxLayout* getLayout() const;

  int setRefills(DepositParameters* depositParams) const;
  QList<QHBoxLayout*> layouts;

 public slots:
  void addLayout();

  void removeLayout();

 private:
  QVBoxLayout* mainLayout;
  QHBoxLayout* buttonLayout;
  QPushButton* addButton;
  QPushButton* removeButton;
};

#endif  // REFILLSWIDGET_H_
