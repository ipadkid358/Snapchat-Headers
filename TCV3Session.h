/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface TCV3Session : NSObject {

	Handle<std::__1::shared_ptr<talkcorev3::Session>, std::__1::shared_ptr<talkcorev3::Session> >* _cppRefHandle;

}
-(id)initWithCpp:(const shared_ptr<talkcorev3::Session>*)arg1 ;
-(void)processTypingActivity:(long long)arg1 ;
-(id)getCallingManager;
-(id)getMetricsMetadataContainer;
-(id)getLocalState;
-(void)refreshParticipants;
-(void)setDelegate:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)background;
-(id)getState;
-(void)dispose;
@end

