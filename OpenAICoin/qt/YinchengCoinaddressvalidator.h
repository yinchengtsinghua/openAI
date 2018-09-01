// Copyright (c) 2011-2014 The YinchengCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef YinchengCoin_QT_YinchengCoinADDRESSVALIDATOR_H
#define YinchengCoin_QT_YinchengCoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class YinchengCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit YinchengCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** YinchengCoin address widget validator, checks for a valid YinchengCoin address.
 */
class YinchengCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit YinchengCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // YinchengCoin_QT_YinchengCoinADDRESSVALIDATOR_H
