<?php
function profile(string $name, int $age)
{ 
//Menginput data
$profile [] = array('name' => $name, 
                  'age' => $age,
                  'address' => 'Lebuawu RT 13 RW 03, Pecangaan, Jepara, Jawa Tengah 59462',
                  'hobbies' => array('Singing', 'Listening to Music', 'Watching Movie', 'Cooking'),
                  'is_married' => false,
                  'list_school' => array('0' => array('name' => 'Elementary School 1, Lebuawu', 'year_in' => 2003, 'year_out' => 2009, 'major' => null), '1' => array('name' => 'Junior High School 1, Mayong', 'year_in' => 2009, 'year_out' => 2012, 'major' => null), '2' => array('name' => 'Senior High School 2, Kudus', 'year_in' => 2012, 'year_out' => 2015, 'major' => 'Natural Science'), '3' => array('name' => 'Diponegoro University', 'year_in' => 2015, 'year_out' => 2019, 'major' => 'Statistics')),
                  'skills' => array('0' => array('skill_name' => 'Microsoft Excel', 'level' => 'expert'), '1' => array('skill_name' => 'Microsoft PowerPoint', 'level' => 'expert'), '2' => array('skill_name' => 'SPSS', 'level' => 'expert'), '3' => array('skill_name' => 'Minitab', 'level' => 'expert'), '4' => array ('skill_name' => 'R',  'level' => 'advanced'), '5' => array('skill_name' => 'EViews', 'level' => 'advanced'), '6' => array('skill_name' => 'CorelDRAW', 'level' => 'advanced'), '7' => array('skill_name' => 'C++', 'level' => 'beginner'), '8' => array('skill_name' => 'Javascript', 'level' => 'beginner'), '9' => array('skill_name' => 'PHP', 'level' => 'beginner'), '10' => array('skill_name' => 'English', 'level' => 'advanced')),
                  'interest_in_coding' => true);

//Mengubah data menjadi file json
$jsonfile = json_encode($profile, JSON_PRETTY_PRINT);

//Menyimpan file json dengan nama "1.json"
file_put_contents('1.json', $jsonfile);
}
profile('Tsania Faizia', 22);
?>
