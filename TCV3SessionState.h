/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TCV3ParticipantState, NSString, NSDictionary;

@interface TCV3SessionState : NSObject {

	BOOL _connecting;
	TCV3ParticipantState* _localUser;
	NSString* _caller;
	long long _callingMedia;
	NSDictionary* _participants;

}

@property (nonatomic,readonly) TCV3ParticipantState * localUser;              //@synthesize localUser=_localUser - In the implementation block
@property (nonatomic,readonly) BOOL connecting;                               //@synthesize connecting=_connecting - In the implementation block
@property (nonatomic,readonly) NSString * caller;                             //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) long long callingMedia;                        //@synthesize callingMedia=_callingMedia - In the implementation block
@property (nonatomic,readonly) NSDictionary * participants;                   //@synthesize participants=_participants - In the implementation block
+(id)SessionStateWithLocalUser:(id)arg1 connecting:(BOOL)arg2 caller:(id)arg3 callingMedia:(long long)arg4 participants:(id)arg5 ;
-(id)initWithLocalUser:(id)arg1 connecting:(BOOL)arg2 caller:(id)arg3 callingMedia:(long long)arg4 participants:(id)arg5 ;
-(TCV3ParticipantState *)localUser;
-(BOOL)connecting;
-(long long)callingMedia;
-(id)description;
-(NSDictionary *)participants;
-(NSString *)caller;
@end
