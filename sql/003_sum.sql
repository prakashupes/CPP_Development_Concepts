CREATE OR REPLACE FUNCTION sum (x integer, y BIGINT)
RETURNS integer AS
$$
	SELECT (x+y) :: integer; --return statement
	--Actual return type is BIGIN thats why we have type converted using :: integer;

$$
LANGUAGE SQL;
