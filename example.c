#include <stdio.h>
#include "upperKebabCase.c"

int main(){
	//lower case
	printf("%s\n", LowerCase("THIS IS LOWER CASE!")); // this is lower case!


	//upper case
	printf("%s\n", UpperCase("this is upper case!")); // THIS IS UPPER CASE!

	//proper case
	printf("%s\n", ProperCase("thiS iS propeR casE!")); // ThiS IS PropeR CasE!

	//strict proper case
	printf("%s\n", StrictProperCase("thiS iS stricT propeR casE!")); // This Is Strict Proper Case!

	//snake case
	printf("%s\n", SnakeCase("This is Snake Case!")); // This_is_Snake_Case!

	//lower snake case
	printf("%s\n", LowerSnakeCase("THIS IS LOWER SNAKE CASE!")); // this_is_lower_snake_case!

	//upper snake case
	printf("%s\n", UpperSnakeCase("this is upper snake case!")); // THIS_IS_UPPER_SNAKE_CASE!

	//kebab case
	printf("%s\n", KebabCase("This is Kebab case!")); // This-is-Kebab-case!

	//lower kebab case
	printf("%s\n", LowerKebabCase("THIS IS LOWER KEBAB CASE!")); // this-is-lower-kebab-case!

	//upper kebab case
	printf("%s\n", UpperKebabCase("this is kebab case!")); // THIS-IS-KEBAB-CASE!

	return 0;
}