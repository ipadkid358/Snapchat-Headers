/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCFideliusColumn, NSArray;

@interface SCFideliusTableSchema : NSObject {

	NSString* _tableName;
	SCFideliusColumn* _primaryKeyColumn;
	NSArray* _columns;
	NSArray* _columnNames;

}
-(id)translateToCreateIfNotExists;
-(id)translateToDropIfExists;
-(id)translateToSelectFormat;
-(id)translateToSelectFormatForColumn:(id)arg1 ;
-(id)primaryKeyWhereClause;
-(id)translateToInsert;
-(id)translateToReplace;
-(id)translateToDeleteFormat;
-(id)initWithName:(id)arg1 primaryKey:(id)arg2 columns:(id)arg3 ;
-(id)primaryKey;
-(id)commitTransaction;
-(id)beginTransaction;
@end

