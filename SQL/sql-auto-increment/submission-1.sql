create sequence gov_id start with 1000 increment by 3;
--create type account_type as inum ('checking', 'savings', 'cd', 'money_market')
create table gov_employee(
    id int primary key generated always as identity,
    gov_id int default nextval('gov_id'),
    name text
    
);









-- Do not modify below this line --
INSERT INTO gov_employee (name) 
  VALUES
      ('John Doe'),
      ('Jane Doe'),
      ('Jim Beam');

SELECT * FROM gov_employee;
