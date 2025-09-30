------- 1
select 
    t.Name as TeacherName,
    t.Surname as TeacherSurname,
    g.Name as GroupName
from [Teachers] t -- aliasing used; I can call it 't' instead of [Teachers] now
cross join [Groups] g;
------- 2
select f.Name as FacultyName
from [Faculties] f
join [Departments] d on d.FacultyId = f.Id
where d.Financing > f.Financing;
------- 3
select 
    c.Name as [Curator Name],
    c.Surname as [Curator Surname],
    g.Name as [Group Name]
from [GroupsCurators] gc
join [Curators] c on gc.CuratorId = c.Id
join [Groups] g on gc.GroupId = g.id
------- 4
select
    g.Name as [Group Name],
    t.Name as [Teacher Name],
    t.Surname as [Teacher Surname]
from [Groups] g
join [GroupsLectures] gl on g.Id = gl.GroupId
join [Lectures] l on gl.LectureId = l.Id
join [Teachers] t on l.TeacherId = t.Id
where g.Name = 'P107';
------- 5
select
    t.Surname as [Teacher Surname],
    f.Name as [Faculty Name]
from [Teachers] t
join [Lectures] l on l.TeacherId = t.Id
join [GroupsLectures] gl on gl.LectureId = l.Id
join [Groups] g on g.Id = gl.GroupId
join [Departments] d on d.Id = g.DepartmentId
join [Faculties] f on f.Id = d.FacultyId;
------- 6
select
    d.Name as [Department Name],
    g.Name as [Group name]
from [Departments] d
join [Groups] g on g.DepartmentId = d.Id;
------- 7
select
    s.Name as [Subjects that Samantha Adams covers]
from [Teachers] t
join [Lectures] l on t.Id = l.TeacherId
join [Subjects] s on s.Id = l.SubjectId
where t.Name = 'Samantha';
------- 8
select
    d.Name
from [Subjects] s
join [Lectures] l on l.SubjectId = s.Id
join [GroupsLectures] gl on gl.LectureId = l.Id
join [Groups] g on gl.GroupId = g.Id
join [Departments] d on g.DepartmentId = d.Id
where s.Name = 'Database Theory';
------- 9
select
    g.Name as [Group Name]
from [Faculties] f
join [Departments] d on f.Id = d.FacultyId
join [Groups] g on d.Id = g.DepartmentId
where f.Name = 'Computer Sciences';
------- 10
select
    g.Name as [Groups on 5th year],
    f.Name as [Their Faculty]
from [Faculties] f
join [Departments] d on d.FacultyId = f.Id
join [Groups] g on g.DepartmentId = d.Id
where g.Year = 5
------- 11
select
    t.Surname as [Teacher Surname],
    g.Name as [Group Name],
    s.Name as [Subject Name]
from [Teachers] t
join [Lectures] l on l.TeacherId = t.Id
join [Subjects] s on l.SubjectId = s.Id
join [GroupsLectures] gl on l.Id = gl.LectureId
join [Groups] g on g.Id = gl.GroupId
where l.LectureRoom = 'B103';
