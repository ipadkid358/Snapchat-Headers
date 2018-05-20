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

@interface SCSnapchattersDeltaFriendMetadataChangeRequest : NSObject <SCDocObjectChangeRequest> {

	long long _rowid;
	int _requestType;
	long long _type;
	NSString* _value;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestWithSnapchattersDeltaFriendMetadata:(id)arg1 ;
+(id)changeRequestForSnapchattersDeltaFriendMetadata:(id)arg1 ;
+(id)deletionRequestForSnapchattersDeltaFriendMetadata:(id)arg1 ;
-(void)createTableWithSQLite:(sqlite3Ref)arg1 ;
-(id)transactWithSQLite:(SQLiteConnection*)arg1 flatbuffers:(FlatBufferBuilder*)arg2 ;
-(id)initWithRowid:(long long)arg1 type:(long long)arg2 value:(id)arg3 ;
-(id)_snapchattersDeltaFriendMetadata;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(const char*)table;
@end

