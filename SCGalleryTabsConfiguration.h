/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface SCGalleryTabsConfiguration : NSObject {

	BOOL _supportsCameraRollTabIntroPopup;
	BOOL _supportsSnapsTabEmptyState;
	BOOL _supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup;
	BOOL _supportsLagunaTabStoryTooltips;
	BOOL _supportsPrivateGalleryPasscodeOptions;
	BOOL _supportsPrivateGalleryPassphraseOptions;
	BOOL _isSelectEntriesView;
	NSSet* _preselectedItemIdentifiers;

}

@property (assign,nonatomic) BOOL supportsCameraRollTabIntroPopup;                                        //@synthesize supportsCameraRollTabIntroPopup=_supportsCameraRollTabIntroPopup - In the implementation block
@property (assign,nonatomic) BOOL supportsSnapsTabEmptyState;                                             //@synthesize supportsSnapsTabEmptyState=_supportsSnapsTabEmptyState - In the implementation block
@property (assign,nonatomic) BOOL supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup;              //@synthesize supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup=_supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup - In the implementation block
@property (assign,nonatomic) BOOL supportsLagunaTabStoryTooltips;                                         //@synthesize supportsLagunaTabStoryTooltips=_supportsLagunaTabStoryTooltips - In the implementation block
@property (assign,nonatomic) BOOL supportsPrivateGalleryPasscodeOptions;                                  //@synthesize supportsPrivateGalleryPasscodeOptions=_supportsPrivateGalleryPasscodeOptions - In the implementation block
@property (assign,nonatomic) BOOL supportsPrivateGalleryPassphraseOptions;                                //@synthesize supportsPrivateGalleryPassphraseOptions=_supportsPrivateGalleryPassphraseOptions - In the implementation block
@property (assign,nonatomic) BOOL isSelectEntriesView;                                                    //@synthesize isSelectEntriesView=_isSelectEntriesView - In the implementation block
@property (nonatomic,copy) NSSet * preselectedItemIdentifiers;                                            //@synthesize preselectedItemIdentifiers=_preselectedItemIdentifiers - In the implementation block
-(void)setPreselectedItemIdentifiers:(NSSet *)arg1 ;
-(void)setIsSelectEntriesView:(BOOL)arg1 ;
-(void)setSupportsCameraRollTabIntroPopup:(BOOL)arg1 ;
-(void)setSupportsSnapsTabEmptyState:(BOOL)arg1 ;
-(void)setSupportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup:(BOOL)arg1 ;
-(void)setSupportsLagunaTabStoryTooltips:(BOOL)arg1 ;
-(void)setSupportsPrivateGalleryPasscodeOptions:(BOOL)arg1 ;
-(void)setSupportsPrivateGalleryPassphraseOptions:(BOOL)arg1 ;
-(BOOL)supportsPrivateGalleryPasscodeOptions;
-(BOOL)supportsPrivateGalleryPassphraseOptions;
-(BOOL)supportsSnapsTabEmptyState;
-(BOOL)supportsCameraRollTabIntroPopup;
-(BOOL)isSelectEntriesView;
-(BOOL)supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup;
-(BOOL)supportsLagunaTabStoryTooltips;
-(NSSet *)preselectedItemIdentifiers;
@end

