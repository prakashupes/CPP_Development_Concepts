CREATE OR REPLACE FUNCTION print(tablename TEXT)
RETURNS TEXT AS
$$
	SELECT (SELECT * FROM quote_ident(tablename));
$$
LANGUAGE SQL;

