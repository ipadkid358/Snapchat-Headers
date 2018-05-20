/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCUserSession, DdmlModel, DdmlInstance;

@interface SCPhishyURLAppManager : NSObject {

	id<SCPerforming> _performer;
	SCUserSession* _userSession;
	DdmlModel* _predictModel;
	DdmlInstance* _predictInstance;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)refreshModels;
-(id)initWithUserSession:(id)arg1 useFakePerformer:(BOOL)arg2 ;
@end

