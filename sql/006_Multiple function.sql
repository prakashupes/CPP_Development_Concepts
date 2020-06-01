CREATE OR REPLACE FUNCTION product(a integer, b integer ,OUT sum integer, OUT product integer)
 RETURNS SETOF RECORD AS 
$BODY$
	SELECT (a+b,a*b);
$BODY$
LANGUAGE SQL;


/*
Task: Fist create a function product then create another function call_product which will internally call product and give the output.
*/

CREATE OR REPLACE FUNCTION call_product(a integer, b integer ,OUT sum integer, OUT product integer)
 RETURNS SETOF RECORD AS 
$BODY$
	SELECT 
	* from product($1,$2);
$BODY$
LANGUAGE SQL;
