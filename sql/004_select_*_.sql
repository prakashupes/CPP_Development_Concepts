CREATE OR REPLACE FUNCTION print(tablename TEXT,OUT name TEXT, OUT one_d integer[])
RETURNS setof record AS
$$
	SELECT tablename.name,tablename.one_d FROM $1; --quote_ident()
$$
LANGUAGE SQL;

