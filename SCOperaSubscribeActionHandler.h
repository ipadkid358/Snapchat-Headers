/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaSubscribeActionHandler
@required
-(void)subscribeToPublicUser:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;
-(void)unsubscribeToPublicUser:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;
-(void)subscribeToCheetahStory:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;
-(void)unsubscribeToCheetahStory:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;
-(void)subscribeToPublisher:(long long)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;
-(void)unsubscribeToPublisher:(long long)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3;

@end
