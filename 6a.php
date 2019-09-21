<?php

$sql = "SELECT nama.name, work.name, kategori.salary from nama, work, kategori where nama.id_salary=kategori.id and nama.id_work=work.id";