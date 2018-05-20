/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCUserSession;

@interface SCDDMLRequestManager : NSObject {

	id<SCPerforming> _performer;
	SCUserSession* _userSession;

}
-(id)initWithUserSession:(id)arg1 ;
-(id)readModelSpecAndParams:(id)arg1 ;
-(void)getAndSavePredictModel:(id)arg1 ;
-(void)_getAndSavePredictModel:(id)arg1 ;
-(BOOL)_savePredictModelRecord:(id)arg1 id:(id)arg2 ;
-(void)_predictGetModel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_urlForModelId:(id)arg1 ;
-(void)_predictGetModel:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

