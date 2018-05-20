/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface TCV3CallingManager : NSObject {

	Handle<std::__1::shared_ptr<talkcorev3::CallingManager>, std::__1::shared_ptr<talkcorev3::CallingManager> >* _cppRefHandle;

}
-(id)initWithCpp:(const shared_ptr<talkcorev3::CallingManager>*)arg1 ;
-(void)updatePublishedMedia:(long long)arg1 ;
-(void)startCall:(long long)arg1 ;
-(void)dismissCall;
-(void)applyRemoteState:(id)arg1 senderUsername:(id)arg2 ;
-(void)updateMuteStatus:(BOOL)arg1 ;
-(long long)processNotification:(id)arg1 senderUsername:(id)arg2 ;
-(long long)processRingingTimeout:(id)arg1 ;
-(id)getPublishersForNotification:(id)arg1 ;
@end
