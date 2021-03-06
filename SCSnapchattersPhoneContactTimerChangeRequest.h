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

@interface SCSnapchattersPhoneContactTimerChangeRequest : NSObject <SCDocObjectChangeRequest> {

	long long _rowid;
	int _requestType;
	unsigned _count;
	long long _type;
	double _firstTimestamp;
	double _lastTimestamp;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double firstTimestamp;                 //@synthesize firstTimestamp=_firstTimestamp - In the implementation block
@property (assign,nonatomic) double lastTimestamp;                  //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (assign,nonatomic) unsigned count;                        //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestWithSnapchattersPhoneContactTimer:(id)arg1 ;
+(id)changeRequestForSnapchattersPhoneContactTimer:(id)arg1 ;
+(id)deletionRequestForSnapchattersPhoneContactTimer:(id)arg1 ;
-(void)createTableWithSQLite:(sqlite3Ref)arg1 ;
-(id)transactWithSQLite:(SQLiteConnection*)arg1 flatbuffers:(FlatBufferBuilder*)arg2 ;
-(double)firstTimestamp;
-(double)lastTimestamp;
-(id)initWithRowid:(long long)arg1 type:(long long)arg2 firstTimestamp:(double)arg3 lastTimestamp:(double)arg4 count:(unsigned)arg5 ;
-(id)_snapchattersPhoneContactTimer;
-(void)setFirstTimestamp:(double)arg1 ;
-(void)setLastTimestamp:(double)arg1 ;
-(unsigned)count;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setCount:(unsigned)arg1 ;
-(const char*)table;
@end

