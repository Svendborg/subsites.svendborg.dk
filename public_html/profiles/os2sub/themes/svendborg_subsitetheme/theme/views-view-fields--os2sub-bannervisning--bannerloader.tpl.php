<div class="page-calendar-slider ">
<div class="slider-cover single'" style="background-image: 
-moz-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%),  url('[field_os2web_base_field_banner]');
background-image: -webkit-gradient(left top, right top, color-stop(0%, rgba(0,0,0,0.75)), color-stop(100%, rgba(0,0,0,0.75))), url('[field_os2web_base_field_banner]');
background-image: -webkit-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url('[field_os2web_base_field_banner]');
background-image: -o-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url('[field_os2web_base_field_banner]');
background-image: -ms-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url('[field_os2web_base_field_banner]');
background-image: linear-gradient(to right, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url('[field_os2web_base_field_banner]');
filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#000000', endColorstr='#000000', GradientType=1 );'">
[field_os2web_base_isproject_desc]
</div></div>



<?php
 print $fields['field_os2web_base_field_banner']->content; 
?>

<?php
     $node = node_load($row->nid);
    $field_name = "field_image";
    $delta = 0;

    $field = field_get_items('node', $node, $field_name);
    $output = field_view_value('node', $node, $field_name, $field[$delta]);

    print ($output['#item']['uri']);
  
   print "<br><br>";
    print "Field:  ";
    print_r($field);                    
    print "<br><br>";
    print "Output:  ";
    print_r($output);
    print "<br><br>";
    ?>