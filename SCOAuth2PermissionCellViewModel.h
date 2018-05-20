/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface SCOAuth2PermissionCellViewModel : NSObject {

	BOOL _isToggleable;
	NSString* _permissionDescription;
	UIImage* _permissionIconImage;
	NSString* _permissionName;

}

@property (nonatomic,copy,readonly) NSString * permissionDescription;              //@synthesize permissionDescription=_permissionDescription - In the implementation block
@property (nonatomic,readonly) UIImage * permissionIconImage;                      //@synthesize permissionIconImage=_permissionIconImage - In the implementation block
@property (nonatomic,readonly) BOOL isToggleable;                                  //@synthesize isToggleable=_isToggleable - In the implementation block
@property (nonatomic,copy,readonly) NSString * permissionName;                     //@synthesize permissionName=_permissionName - In the implementation block
-(id)initWithPermissionIconImage:(id)arg1 description:(id)arg2 isToggleable:(BOOL)arg3 permissionName:(id)arg4 ;
-(NSString *)permissionName;
-(UIImage *)permissionIconImage;
-(NSString *)permissionDescription;
-(id)description;
-(BOOL)isToggleable;
@end
