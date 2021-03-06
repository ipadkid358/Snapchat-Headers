/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCDiscoverChannelsModel;

@interface SCDiscoverEditionFetcher : NSObject {

	SCDiscoverChannelsModel* _discoverChannelsModel;
	id<SCPerforming> _performer;

}

@property (nonatomic,retain) id<SCPerforming> performer;              //@synthesize performer=_performer - In the implementation block
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(id)initWithDiscoverChannelsModel:(id)arg1 ;
-(void)fetchEdition:(id)arg1 publisher:(id)arg2 publisherId:(long long)arg3 subscribeState:(unsigned long long)arg4 context:(unsigned long long)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)fetchEdition:(id)arg1 publisher:(id)arg2 context:(unsigned long long)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
@end

