load "./gen" "."

criteria binary
filter "*.proto;"
select left.diff.files
copy left->right
select left.orphan.files
copy left->right
select left.all.files
delete left

load "./gen" "../../moriServer/transMsg"

criteria binary
filter "*.pb.h;*.cc;"
select left.diff.files
copy left->right
select left.orphan.files
copy left->right
select left.all.files
delete left

load "./gen" "../../moriServer/src/DataBase"
criteria binary
filter "*.h;*.cpp;"
select left.diff.files
copy left->right
select left.orphan.files
copy left->right
select left.files
delete left