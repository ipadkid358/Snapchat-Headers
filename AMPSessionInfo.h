/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, AMPEvent;

@interface AMPSessionInfo : NSObject {

	NSString* _currentSessionId;
	long long _currentSessionSequenceId;
	double _currentSessionStartRelativeSeconds;
	double _currentSessionTimeInBackgroundSeconds;
	double _previousSessionEndRelativeSeconds;
	NSDate* _previousSessionEndDate;
	AMPEvent* _previousSessionEndEvent;

}

@property (nonatomic,retain) NSString * currentSessionId;                               //@synthesize currentSessionId=_currentSessionId - In the implementation block
@property (assign,nonatomic) long long currentSessionSequenceId;                        //@synthesize currentSessionSequenceId=_currentSessionSequenceId - In the implementation block
@property (assign,nonatomic) double currentSessionStartRelativeSeconds;                 //@synthesize currentSessionStartRelativeSeconds=_currentSessionStartRelativeSeconds - In the implementation block
@property (assign,nonatomic) double currentSessionTimeInBackgroundSeconds;              //@synthesize currentSessionTimeInBackgroundSeconds=_currentSessionTimeInBackgroundSeconds - In the implementation block
@property (assign,nonatomic) double previousSessionEndRelativeSeconds;                  //@synthesize previousSessionEndRelativeSeconds=_previousSessionEndRelativeSeconds - In the implementation block
@property (nonatomic,retain) NSDate * previousSessionEndDate;                           //@synthesize previousSessionEndDate=_previousSessionEndDate - In the implementation block
@property (nonatomic,retain) AMPEvent * previousSessionEndEvent;                        //@synthesize previousSessionEndEvent=_previousSessionEndEvent - In the implementation block
-(id)initWithCurrentSessionId:(id)arg1 currentSessionSequenceId:(long long)arg2 currentSessionStartRelativeSeconds:(double)arg3 currentSessionTimeInBackgroundSeconds:(double)arg4 previousSessionEndRelativeSeconds:(double)arg5 previousSessionEndDate:(id)arg6 previousSessionEndEvent:(id)arg7 ;
-(NSString *)currentSessionId;
-(long long)currentSessionSequenceId;
-(double)currentSessionStartRelativeSeconds;
-(double)currentSessionTimeInBackgroundSeconds;
-(double)previousSessionEndRelativeSeconds;
-(NSDate *)previousSessionEndDate;
-(AMPEvent *)previousSessionEndEvent;
-(void)setCurrentSessionId:(NSString *)arg1 ;
-(void)setCurrentSessionSequenceId:(long long)arg1 ;
-(void)setCurrentSessionStartRelativeSeconds:(double)arg1 ;
-(void)setCurrentSessionTimeInBackgroundSeconds:(double)arg1 ;
-(void)setPreviousSessionEndRelativeSeconds:(double)arg1 ;
-(void)setPreviousSessionEndDate:(NSDate *)arg1 ;
-(void)setPreviousSessionEndEvent:(AMPEvent *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToInfo:(id)arg1 ;
@end

