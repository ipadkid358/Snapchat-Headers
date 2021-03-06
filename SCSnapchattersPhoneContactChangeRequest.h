/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObjectChangeRequest.h>

@class NSString;

@interface SCSnapchattersPhoneContactChangeRequest : NSObject <SCDocObjectChangeRequest> {

	long long _rowid;
	int _requestType;
	NSString* _phoneNumberHash;
	NSString* _displayName;
	double _modificationTimestamp;
	double _addressBookEditionTimestamp;

}

@property (nonatomic,copy) NSString * phoneNumberHash;                        //@synthesize phoneNumberHash=_phoneNumberHash - In the implementation block
@property (nonatomic,copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) double modificationTimestamp;                    //@synthesize modificationTimestamp=_modificationTimestamp - In the implementation block
@property (assign,nonatomic) double addressBookEditionTimestamp;              //@synthesize addressBookEditionTimestamp=_addressBookEditionTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestWithSnapchattersPhoneContact:(id)arg1 ;
+(id)changeRequestForSnapchattersPhoneContact:(id)arg1 ;
+(id)deletionRequestForSnapchattersPhoneContact:(id)arg1 ;
-(void)createTableWithSQLite:(sqlite3Ref)arg1 ;
-(id)transactWithSQLite:(SQLiteConnection*)arg1 flatbuffers:(FlatBufferBuilder*)arg2 ;
-(NSString *)phoneNumberHash;
-(double)addressBookEditionTimestamp;
-(id)initWithRowid:(long long)arg1 phoneNumberHash:(id)arg2 displayName:(id)arg3 modificationTimestamp:(double)arg4 addressBookEditionTimestamp:(double)arg5 ;
-(id)_snapchattersPhoneContact;
-(void)setPhoneNumberHash:(NSString *)arg1 ;
-(void)setModificationTimestamp:(double)arg1 ;
-(void)setAddressBookEditionTimestamp:(double)arg1 ;
-(const char*)table;
-(NSString *)displayName;
-(double)modificationTimestamp;
-(void)setDisplayName:(NSString *)arg1 ;
@end

