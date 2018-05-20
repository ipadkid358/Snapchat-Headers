/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCEncryptedTable.h>

@class SCFideliusTableSchema, NSArray, SCFideliusColumn;

@interface SCFideliusFriendDeviceInfoTable : SCEncryptedTable {

	SCFideliusTableSchema* _schema;
	NSArray* _indexes;
	SCFideliusColumn* _theirOutBetaCol;
	SCFideliusColumn* _theirUserIdCol;
	SCFideliusColumn* _mystiqueCol;
	SCFideliusColumn* _versionCol;
	SCFideliusColumn* _timestampCol;

}
-(id)tableSchema;
-(id)objectFromRow:(id)arg1 ;
-(id)updateParametersForObject:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 performer:(id)arg2 ;
-(BOOL)deleteAllFriendDevicesForUserId:(id)arg1 ;
-(id)_friendDevicesForUserId:(id)arg1 ;
-(id)friendDevicesForUserId:(id)arg1 ;
-(id)friendDevicesDictForUserId:(id)arg1 ;
-(id)indexes;
-(id)tableName;
@end
