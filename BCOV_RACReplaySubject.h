/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOV_RACSubject.h>

@class NSMutableArray, NSError;

@interface BCOV_RACReplaySubject : BCOV_RACSubject {

	BOOL _hasCompleted;
	BOOL _hasError;
	unsigned long long _capacity;
	NSMutableArray* _valuesReceived;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long capacity;                  //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) NSMutableArray * valuesReceived;              //@synthesize valuesReceived=_valuesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted;                              //@synthesize hasCompleted=_hasCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasError;                                  //@synthesize hasError=_hasError - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
+(id)replaySubjectWithCapacity:(unsigned long long)arg1 ;
-(void)sendCompleted;
-(void)sendNext:(id)arg1 ;
-(void)sendError:(id)arg1 ;
-(NSMutableArray *)valuesReceived;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(BOOL)hasError;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(id)subscribe:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

