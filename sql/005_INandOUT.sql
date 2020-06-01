CREATE OR REPLACE FUNCTION product(a integer, b integer ,OUT sum integer, OUT product integer)
 RETURNS SETOF RECORD AS 
$$
	SELECT (a+b,a*b);
$$
LANGUAGE SQL;

