/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSString, SCLens;

@interface SCLensDataProviderConfigurationBuilder : NSObject {

	NSPredicate* _filteringPredicate;
	NSString* _applicableContext;
	SCLens* _originalLens;
	BOOL _enableStudioSync;
	BOOL _shouldBlockDefaultBundledLenses;
	BOOL _shouldShowOnDemandLenses;

}
+(id)withLensDataProviderConfiguration:(id)arg1 ;
-(id)setFilteringPredicate:(id)arg1 ;
-(id)setApplicableContext:(id)arg1 ;
-(id)setOriginalLens:(id)arg1 ;
-(id)setEnableStudioSync:(BOOL)arg1 ;
-(id)setShouldBlockDefaultBundledLenses:(BOOL)arg1 ;
-(id)setShouldShowOnDemandLenses:(BOOL)arg1 ;
-(id)build;
@end

