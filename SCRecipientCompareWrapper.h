/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSortableRecipient;
@interface SCRecipientCompareWrapper : NSObject {

	id<SCSortableRecipient> _recipient;
	unsigned long long _matchType;

}

@property (nonatomic,retain) id<SCSortableRecipient> recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                   //@synthesize matchType=_matchType - In the implementation block
-(unsigned long long)matchType;
-(long long)compare:(id)arg1 ;
-(id<SCSortableRecipient>)recipient;
-(void)setRecipient:(id<SCSortableRecipient>)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
@end

