<?php


$hobbies = array ('bycicling', 'running'
    );

$list_school = array (
    'name' => 'Sekolah Vokasi UGM',
    'year_in' => '2013',
    'year_out' => '2016',
    'major' => 'Diploma'
    );
    
$skill_name = array ('PHP', 'Framework Codigniter');
$level = array ('advanced', 'advanced');
    

$biodata = array (
        'name' => 'Arina Miftakhul Karimah',
        'age' => 24,
        'address' => 'Jl. Sunter Jaya IIA RT 2 RW 3 No. 20A, Sunter Jaya, Tanjung Priok, Jakarta Utara',
        'hobbies' => $hobbies,
        'is_married' => false,
        'list_school' => $list_school,
        'skills' => array ('skill_name' => $skill_name,
                            'level' => $level),
        'interest_in_coding' => true
    );
    
    echo json_encode($biodata);
