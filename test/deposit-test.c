#include <sum.h>

#include <ctest.h>

CTEST(amount_of_income, arithmetic_suite)
{
    // Given
    const int a = 199;
    const int b = 39999;

    // When
    const int result = amount_of_income(a, b);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}


CTEST(amount_of_income, wrong length)
{
    // Given
    const int a = -1;
    const int b = 5000;

    // When
    const int result = amount_of_income(a, b);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(amount_of_income, wrong dep_amount)
{
    // Given
    const int a = 199;
    const int b = -1;

    // When
    const int result = amount_of_income(a, b);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(amount_of_income,wrong length and dep_amount)
{
    // Given
    const int a = -1;
    const int b = -1;

    // When
    const int result = amount_of_income(a, b);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
