--DROP TABLE [BookGenres]
--GO
--DROP TABLE [BookCategories]
--GO
--DROP TABLE [ReturnedBooks]
--GO
--DROP TABLE [BorrowedBooks]
--GO
--DROP TABLE [Faculty]
--GO
--DROP TABLE [Books]
--GO
--DROP TABLE [Publishers]
--GO
--DROP TABLE [Authors]
--GO
--DROP TABLE [Users]
--GO

-- ========================================================
CREATE TABLE [Users] (
    [universityID] NUMERIC (9)   IDENTITY (1, 1) NOT NULL,
    [userType]     VARCHAR (20)  NOT NULL,
    [password]     VARCHAR (255) NOT NULL,
    [status]       VARCHAR (20)  NULL,
    [lastName]     VARCHAR (100) NOT NULL,
    [firstName]    VARCHAR (100) NOT NULL,
    [email]        VARCHAR (100) NOT NULL,
    [dateOfBirth]  DATE          NOT NULL,
    [gender]       VARCHAR (10)  NOT NULL,
    [idNumber]     VARCHAR (13)  NOT NULL,
    [phoneNumber]  VARCHAR (10)  NOT NULL,
    [userImage]    IMAGE         NULL,
    [Blocked]      VARCHAR (20)  DEFAULT ('NO') NULL,
    [Logins]       INT           DEFAULT ((0)) NULL,
    PRIMARY KEY CLUSTERED ([universityID] ASC),
    UNIQUE NONCLUSTERED ([email] ASC),
    UNIQUE NONCLUSTERED ([idNumber] ASC),
    UNIQUE NONCLUSTERED ([phoneNumber] ASC)
);

CREATE TABLE [Faculty] (
    [facultyID]  INT           IDENTITY (1, 1) NOT NULL,
    [department] VARCHAR (100) NOT NULL,
    PRIMARY KEY CLUSTERED ([facultyID] ASC)
);

CREATE TABLE [Authors] (
    [authorID]    INT           IDENTITY (1, 1) NOT NULL,
    [authorNames] VARCHAR (255) NULL,
    PRIMARY KEY CLUSTERED ([authorID] ASC)
);

CREATE TABLE [Publishers] (
    [publisherID]   INT           IDENTITY (1, 1) NOT NULL,
    [publisherName] VARCHAR (255) NOT NULL,
    PRIMARY KEY CLUSTERED ([publisherID] ASC)
);

CREATE TABLE [Books] (
    [bookID]          INT           IDENTITY (1, 1) NOT NULL,
    [title]           VARCHAR (255) NOT NULL,
    [authorID]        INT           NOT NULL,
    [publisherID]     INT           NOT NULL,
    [publicationDate] DATE          NOT NULL,
    [ISBN]            VARCHAR (30)  NOT NULL,
    [genreID]         INT           NULL,
    [totalCopies]     INT           NOT NULL,
    [BookImage]       IMAGE         NULL,
    [totalBorrowed]   INT           DEFAULT ((0)) NOT NULL,
    [categoryID]      INT           NULL,
    PRIMARY KEY CLUSTERED ([bookID] ASC),
    CONSTRAINT [FK_AuthorBooksID] FOREIGN KEY ([authorID]) REFERENCES [Authors] ([authorID]),
    CONSTRAINT [FK_PublisherBooksID] FOREIGN KEY ([publisherID]) REFERENCES [Publishers] ([publisherID])
);

CREATE TABLE [BorrowedBooks] (
    [borrowID]     INT         IDENTITY (1, 1) NOT NULL,
    [universityID] NUMERIC (9) NOT NULL,
    [bookID]       INT         NOT NULL,
    [borrowedDate] DATE        NOT NULL,
    [dueDate]      DATE        NOT NULL,
    PRIMARY KEY CLUSTERED ([borrowID] ASC),
    CONSTRAINT [FK_BorrowedUniversityID] FOREIGN KEY ([universityID]) REFERENCES [Users] ([universityID]),
    CONSTRAINT [FK_BorrowedBooksID] FOREIGN KEY ([bookID]) REFERENCES [Books] ([bookID])
);

CREATE TABLE [ReturnedBooks] (
    [returnID]   INT          IDENTITY (1, 1) NOT NULL,
    [borrowID]   INT          NOT NULL,
    [bookID]     INT          NOT NULL,
    [universityID] INT        NOT NULL,
    [returnDate] DATE         NULL,
    [returned]   NVARCHAR (5) DEFAULT ('NO') NOT NULL,
    PRIMARY KEY CLUSTERED ([returnID] ASC),
    CONSTRAINT [FK_ReturnedBorrowID] FOREIGN KEY ([borrowID]) REFERENCES [BorrowedBooks] ([borrowID])
);

CREATE TABLE [BookCategories] (
    [categoryID]   INT           IDENTITY (1, 1) NOT NULL,
    [categoryName] VARCHAR (255) NOT NULL,
    PRIMARY KEY CLUSTERED ([categoryID] ASC)
);

CREATE TABLE [BookGenres] (
    [genreID]    INT           IDENTITY (1, 1) NOT NULL,
    [genre_name] VARCHAR (100) NULL,
    [categoryID] INT           NULL,
    PRIMARY KEY CLUSTERED ([genreID] ASC)
);

-- =================================================

-- Insert data into Users table
SET IDENTITY_INSERT [Users] ON
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(220000001 AS Decimal(9, 0)), N'Student', N'securepass', N'Offline', N'Smith', N'Jane', N'janesmith@gmail.com', N'1985-12-01', N'Female', N'8512016543087', N'0721836311',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(222048740 AS Decimal(9, 0)), N'Main Admin', N'rootpasskey', N'Offline', N'Sambo', N'Hillgate', N'hillgatesambo101@uj.ac.za', N'2003-10-01', N'Male', N'0310012340081', N'0795720724',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(222000001 AS Decimal(9, 0)), N'Standard Admin', N'555', N'Offline', N'Zwane', N'Gladys', N'gladyszwane@gmail.com', N'1996-06-12', N'Female', N'9606126721087', N'0796545622',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000000 AS Decimal(9, 0)), N'Student', N'password0', N'Offline', N'Doe', N'John', N'johndoe@gmail.com', N'1990-05-15', N'Male', N'9005156479081', N'0753754682',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000001 AS Decimal(9, 0)), N'Student', N'password1', N'Offline', N'Walker', N'Alan', N'alanwalker101@gmail.com', N'1991-10-01', N'Male', N'9110015990081', N'0768361931',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000002 AS Decimal(9, 0)), N'Student', N'password2', N'Offline', N'Kozuki', N'Momonosuke', N'momonosuke19@gmail.com', N'2005-07-03', N'Male', N'0507036577084', N'0798873213',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000003 AS Decimal(9, 0)), N'Standard Admin', N'password3', N'Offline', N'Monkey D.', N'Luffy', N'pirateking@gmail.com', N'2005-07-03', N'Male', N'9807032362081', N'0795624312',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000004 AS Decimal(9, 0)), N'Student', N'password4', N'Offline', N'Zidwe', N'Masho', N'mashozidwe@gmail.com', N'2004-12-22', N'Female', N'0412227218212', N'0793827463',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000005 AS Decimal(9, 0)), N'Student', N'password5', N'Offline', N'Mink', N'Carrot', N'carrotcarrot@gmail.com', N'2005-07-03', N'Female', N'0507038163640', N'0872345521',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000006 AS Decimal(9, 0)), N'Student', N'password6', N'Offline', N'Dracule', N'Mihawk', N'swordsmanno1world@gmail.com', N'1978-07-03', N'Male', N'7807031233087', N'0897284521',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000007 AS Decimal(9, 0)), N'Student', N'password7', N'Offline', N'Jewelry', N'Bonney', N'jewelrybonney12@gmail.com', N'2002-12-21', N'Female', N'0212214747219', N'0797654321',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000008 AS Decimal(9, 0)), N'Student', N'password8', N'Offline', N'Maluleka', N'Jama', N'jamamaluleka@gmail.com', N'2005-07-03', N'Female', N'0507033452081', N'0812345678',  N'NO', 0)
INSERT INTO [Users] ([universityID], [userType], [password], [status], [lastName], [firstName], [email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins]) VALUES (CAST(230000010 AS Decimal(9, 0)), N'Student', N'password10', N'Offline', N'surname1', N'name1', N'student1@gmail.com', N'2005-07-07', N'Male', N'0507072142689', N'0316116484',  N'NO', 0)
SET IDENTITY_INSERT [Users] OFF

-- Insert data into Faculty table
INSERT INTO [Faculty] ([department])
VALUES 	('Faculty of Art, Design, and Architecture'),
	('Faculty of Economic and Financial Sciences'),
	('Faculty of Education'),
	('Faculty of Engineering and the Built Environment'),
	('Faculty of Health Sciences'),
	('Faculty of Humanities'),
	('Faculty of Law'),
	('Faculty of Management'),
	('Faculty of Science');

-- Insert data into Authors table
INSERT INTO [Authors] ([authorNames])
VALUES ('Eichiro Oda'), --1
       ('Sylvester Stylone'); --2

-- Insert data into Publishers table
INSERT INTO [Publishers] ([publisherName])
VALUES ('Mac Miller'),        --1
       ('TOEI Productions');  --2

-- Insert data into Books table
SET IDENTITY_INSERT [Books] ON
INSERT INTO [Books] ([bookID], [title], [authorID], [publisherID], [publicationDate], [ISBN], [genreID], [totalCopies], [totalBorrowed], [categoryID]) VALUES (1, N'One Piece', 1, 2, N'2022-01-01', N'123456789', 1, 15,  0, NULL)
INSERT INTO [Books] ([bookID], [title], [authorID], [publisherID], [publicationDate], [ISBN], [genreID], [totalCopies], [totalBorrowed], [categoryID]) VALUES (2, N'BodyBuilding for Electrical Engineers', 2, 1, N'2022-02-01', N'987654321', 2, 5,  0, NULL)
SET IDENTITY_INSERT [Books] OFF


-- Insert data into BorrowedBooks table
INSERT INTO [BorrowedBooks] ([universityID], [bookID], [borrowedDate], [dueDate])
VALUES (230000000, 1, '2022-03-01', '2022-03-15'),
       (230000001, 2, '2022-04-01', '2022-04-15');

-- Insert data into ReturnedBooks table
SET IDENTITY_INSERT [ReturnedBooks] ON
INSERT INTO [ReturnedBooks] ([returnID], [borrowID], [bookID], [universityID], [returnDate], [returned]) VALUES (1, 1, 1, 230000000, N'2022-03-14', N'YES')
INSERT INTO [ReturnedBooks] ([returnID], [borrowID], [bookID], [universityID], [returnDate], [returned]) VALUES (2, 2, 2, 230000001, N'2022-04-10', N'YES')
SET IDENTITY_INSERT [ReturnedBooks] OFF

-- Insert data into BookCategories table
INSERT INTO [BookCategories] ([categoryName])
VALUES ('Fiction'),                     -- 1
       ('Non-Fiction'),                 -- 2
       ('Academic & Textbooks'),        -- 3
       ('Reference & Dictionaries'),    -- 4
       ('Journals & Magazines'),        -- 5
       ('Research & Thesis'),           -- 6
       ('Arts & Humanities'),           -- 7
       ('Sciences'),                    -- 8
       ('Social Sciences'),             -- 9   
       ('Business & Economics'),        -- 10
       ('Health & Medicine'),           -- 11
       ('Law & Legal Studies'),         -- 12
       ('Engineering & Technology'),    -- 13
       ('Environmental Studies'),       -- 14
       ('History & Archaeology'),       -- 15
       ('Unkown');                      -- 16

INSERT INTO [BookGenres] ([genre_name],[categoryID])
VALUES  ('Contemporary', 1),                    -- 1
        ('Mystery/Thriller', 1),                -- 2
        ('Romance', 1),                         -- 3
        ('Science Fiction/Fantasy', 1),         -- 4
        ('Historical Fiction', 1),              -- 5
        ('Crime/Detective', 1),                 -- 6
        ('Young Adult', 1),                     -- 7
        ('Childrens', 1),                       -- 8

        ('Biography/Autobiography', 2),         -- 9
        ('History', 2),                         -- 10
        ('Science', 2),                         -- 11
        ('Self-Help/Personal Development', 2),  -- 12
        ('Business/Entrepreneurship', 2),       -- 13
        ('Travel', 2),                          -- 14
        ('Health/Fitness', 2),                  -- 15
        ('Arts/Crafts', 2),                     -- 16

        ('Mathematics', 3),                                         -- 17
        ('Sciences (Physics, Chemistry, Biology)', 3),              -- 18
        ('Computer Science', 3),                                    -- 19
        ('Engineering', 3),                                         -- 20
        ('Social Sciences (Pschology, Sociology, Economics', 3),    -- 21
        ('Literature/Linguistics', 3),                              -- 22
        ('History/Archaeology',3),                                  -- 23
        ('Law', 3),                                                 -- 24

        ('Dictioaries', 4),             -- 25
        ('Enclyclopedias', 4),          -- 26
        ('Atlases/Maps', 4),            -- 27
        ('Style Guides', 4),            -- 28
        ('Research Methodology', 4),    -- 29

        ('Scientific Journals', 5),     -- 30
        ('Literary Magazines', 5),      -- 31
        ('Academic Journals', 5),       -- 32
        ('News Magazines', 5),          -- 33

        ('Contemporary Poetry', 6),     -- 34
        ('Classic Poetry', 6),          -- 35
        ('Anthologies', 6),             -- 35

        ('Classic Plays' ,7),           -- 36
        ('Modern Plays', 7),            -- 37
        ('Theater Scripts', 7),         -- 38

        ('Painting/Sculpture', 8),      -- 39
        ('Photography', 8),             -- 40
        ('Architecture', 8),            -- 41
        ('Graphic Design', 8),          -- 42

        ('Music Theory', 9),            -- 43
        ('Music History', 9),           -- 44
        ('Sheet Music/Collections', 9), -- 45

        ('Film History', 10),           -- 46
        ('Film Theory', 10),            -- 47
        ('Screenplays', 10),            -- 48

        ('Sports Biographies', 11),     -- 49
        ('Fitness Guides', 11),         -- 50
        ('Outdoor Activities', 11),     -- 51

        ('Western Philosophy', 12),     -- 52
        ('Eastern Philosophy', 12),     -- 53
        ('Ethics/Morality', 12),        -- 54
        ('Mechanical Engineering', 13),
        ('Electrical Engineering', 13),
        ('Civil Engineering', 13),
        ('Computer Science and Engineering', 13),
        ('Chemical Engineering', 13),
        ('Aerospace Engineering', 13),
        ('Industrial Engineering', 13),
        ('Biomedical Engineering', 13),
        ('Environmental Engineering', 13),

        ('Environmental Science', 14),
        ('Ecology', 14),
        ('Conservation', 14),
        ('Sustainable Development', 14),
        ('Environmental Policy', 14),
        ('Climate Change', 14),
        ('Renewable Energy', 14),
        ('Environmental Ethics', 14),

        ('Environmental Science', 15),
        ('Ecology', 15),
        ('Conservation', 15),
        ('Sustainable Development', 15),
        ('Environmental Policy', 15),
        ('Climate Change', 15),
        ('Renewable Energy', 15),
        ('Environmental Ethics', 15),
        
        ('Unknown', 16);


		SELECT b.title AS Title,  a.authorNames AS Author, p.publisherName AS Publisher, b.publicationDate, ISBN, g.genre_name AS Genre, 
		c.categoryName AS Category, b.totalCopies AS 'Total Copies', (b.totalCopies - b.totalBorrowed) AS 'Amount available' FROM 
		Books b INNER JOIN BookGenres g on g.genreID = b.genreID INNER JOIN Authors a ON b.authorID = a.authorID 
		INNER JOIN Publishers p ON b.publisherID = p.publisherID INNER JOIN BookCategories c ON g.categoryID = c.categoryID


		 SELECT st.universityID AS 'Student No.', st.lastName AS [Surname], st.firstName AS [Name], b.title AS 'Book Title', 
		bb.borrowedDate AS 'BorrowedDate', br.returnDate AS 'Returned Date'  
		 FROM Books b 
		 INNER JOIN BorrowedBooks bb ON b.bookID=bb.bookID 
		 INNER JOIN ReturnedBooks br ON bb.borrowID = br.borrowID
		 INNER JOIN Users st ON bb.universityID = st.universityID 
		 WHERE (br.returned='YES' OR br.returned='LATE') AND bb.universityID = 230000006;


		SELECT bc.categoryName AS 'Category', bg.genre_name AS 'Genre' FROM BookCategories bc 
		INNER JOIN BookGenres bg ON bg.categoryID = bc.categoryID;

		 SELECT st.universityID AS 'Student No.', st.lastName AS Surname, st.firstName AS [Name], b.title AS 'Book Title',
		bb.borrowedDate AS 'BorrowedDate', br.returnDate AS 'Returned Date' FROM Books b INNER JOIN BorrowedBooks bb ON b.bookID = bb.bookID 
		INNER JOIN ReturnedBooks br ON bb.borrowID = br.borrowID INNER JOIN Users st ON bb.universityID = st.universityID 
	 WHERE bb.borrowedDate > DATEADD(DAY, -2, '2022-03-03') ;


		 SELECT b.title AS 'Book Title' 
		 FROM Books b 
		 INNER JOIN BorrowedBooks bb ON bb.bookID = b.bookID 
		 WHERE bb.universityID=230000006;

         --SELECT SERVERPROPERTY('COLLATION')

