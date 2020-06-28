﻿//RegisterDiplomaWidget.h by Emercoin developers
#pragma once
#include <qt/NameValueLineEdits.h>

#include <QLabel>

class WalletModel;

class QComboBox;
class QBoxLayout;
class QSpinBox;
class QPlainTextEdit;

class RegisterDiplomaWidget: public QWidget {
	public:
        RegisterDiplomaWidget(WalletModel* model);
		NameValueLineEdits* _NVPair = 0;
	protected:
		QComboBox* _chooseRoot = 0;
		QLabel* _lineAddress = 0;
		QLineEdit* _lineSerial = 0;
		QLineEdit* _lineName = 0;
		QSpinBox* _yearAdmission = 0;
		QSpinBox* _yearGraduation = 0;
		QPlainTextEdit* _editOther = 0;
		QLabel* addText(QBoxLayout*lay, const QString& s);
		void showError(const QString & s);

		void recalcValue();
        WalletModel* model;
};
