UPDATE salary SET sex = (
    CASE SEX
    WHEN 'm' THEN 'f'
    WHEN 'f' THEN 'm'
    END
)